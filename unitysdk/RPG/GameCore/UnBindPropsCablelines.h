#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNBINDPROPSCABLELINES_METHOD_3_3428E5F242F88B3F_OFFSET UNITYSDK_OFFSET(0x19E32790)
#define RPG_GAMECORE_UNBINDPROPSCABLELINES_METHOD_3_8EF36C241B57F89E_OFFSET UNITYSDK_OFFSET(0x19E32810)
#define RPG_GAMECORE_UNBINDPROPSCABLELINES__CTOR_OFFSET UNITYSDK_OFFSET(0x19E327E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnBindPropsCablelines_TypeDefinitionIndex = 20100;

	class UnBindPropsCablelines : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LinePropInstanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNBINDPROPSCABLELINES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3428E5F242F88B3F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnBindPropsCablelines*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnBindPropsCablelines*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNBINDPROPSCABLELINES_METHOD_3_3428E5F242F88B3F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8EF36C241B57F89E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnBindPropsCablelines* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnBindPropsCablelines*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNBINDPROPSCABLELINES_METHOD_3_8EF36C241B57F89E_OFFSET))(a1, a2);
		}
	};
}
