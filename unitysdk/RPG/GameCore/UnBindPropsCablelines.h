#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_UNBINDPROPSCABLELINES_METHOD_3_8EF36C241B57F89E_OFFSET UNITYSDK_OFFSET(0x1D2AD6A0)
#define RPG_GAMECORE_UNBINDPROPSCABLELINES_METHOD_3_9E29BC34EE348D15_OFFSET UNITYSDK_OFFSET(0x1D2AD660)
#define RPG_GAMECORE_UNBINDPROPSCABLELINES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2AD690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnBindPropsCablelines_TypeDefinitionIndex = 21024;

	class UnBindPropsCablelines : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LinePropInstanceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNBINDPROPSCABLELINES__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_9E29BC34EE348D15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnBindPropsCablelines*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnBindPropsCablelines*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNBINDPROPSCABLELINES_METHOD_3_9E29BC34EE348D15_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8EF36C241B57F89E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::UnBindPropsCablelines* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::UnBindPropsCablelines*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UNBINDPROPSCABLELINES_METHOD_3_8EF36C241B57F89E_OFFSET))(a1, a2);
		}
	};
}
