#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimEntityVar; }
namespace RPG::GameCore { class FiveDimEntityVarConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_2_94416CBCB25482A0_OFFSET UNITYSDK_OFFSET(0x171F06C0)
#define RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_2_C175C4FAB09B42B6_OFFSET UNITYSDK_OFFSET(0x171EBE20)
#define RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_2_CEED9CF58A3C83CA_OFFSET UNITYSDK_OFFSET(0x171F0700)
#define RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x171F0860)
#define RPG_GAMECORE_FIVEDIMDYNAMICVAR__CTOR_OFFSET UNITYSDK_OFFSET(0x171EFAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDynamicVar_TypeDefinitionIndex = 17312;

	class FiveDimDynamicVar : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsEntityVar; // 0x10
		::System::String* VarName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_C175C4FAB09B42B6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimDynamicVar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimDynamicVar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_2_C175C4FAB09B42B6_OFFSET))(a1, a2);
		}

		::System::String* Method_2_94416CBCB25482A0(::RPG::GameCore::FiveDimEntityVarConfig* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_2_94416CBCB25482A0_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_2_F0E307B84478A272_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEntityVar* Method_2_CEED9CF58A3C83CA(::RPG::GameCore::FiveDimEntityVarConfig* a1)
		{
			return ((::RPG::GameCore::FiveDimEntityVar*(*)(::PVOID, ::RPG::GameCore::FiveDimEntityVarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDYNAMICVAR_METHOD_2_CEED9CF58A3C83CA_OFFSET))(this, a1);
		}
	};
}
