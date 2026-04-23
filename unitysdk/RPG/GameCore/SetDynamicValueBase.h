#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SETDYNAMICVALUEBASE_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x18E169A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE_METHOD_3_299676002783A029_OFFSET UNITYSDK_OFFSET(0x18E16720)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE_METHOD_3_2E0E90D7E0EB2A64_OFFSET UNITYSDK_OFFSET(0x18E168E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18E16AB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x18E166F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueBase_TypeDefinitionIndex = 22814;

	class SetDynamicValueBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBase*>*>** StaticGet__FromBinary_SetDynamicValueBase_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBase*>*>**)Il2CppClass::FromTypeDefinitionIndex(SetDynamicValueBase_TypeDefinitionIndex)->GetStaticField(0x4D9A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_3_299676002783A029(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_METHOD_3_299676002783A029_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2E0E90D7E0EB2A64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetDynamicValueBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetDynamicValueBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_METHOD_3_2E0E90D7E0EB2A64_OFFSET))(a1, a2);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBASE_GET_ISCLIENTONLY_OFFSET))(this);
		}
	};
}
