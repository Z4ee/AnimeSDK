#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_AIAVATARBASETYPESELECTOR_METHOD_3_364B1D26533C5FED_OFFSET UNITYSDK_OFFSET(0x1B9F2890)
#define RPG_GAMECORE_AIAVATARBASETYPESELECTOR_METHOD_3_BBD009CB5B03889A_OFFSET UNITYSDK_OFFSET(0x1B9F2840)
#define RPG_GAMECORE_AIAVATARBASETYPESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F2880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIAvatarBaseTypeSelector_TypeDefinitionIndex = 14993;

	class AIAvatarBaseTypeSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BaseTypeList; // 0x10
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x18
		::System::Boolean InverseResultFlag; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIAVATARBASETYPESELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_BBD009CB5B03889A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIAvatarBaseTypeSelector*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIAvatarBaseTypeSelector*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIAVATARBASETYPESELECTOR_METHOD_3_BBD009CB5B03889A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_364B1D26533C5FED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AIAvatarBaseTypeSelector* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AIAvatarBaseTypeSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIAVATARBASETYPESELECTOR_METHOD_3_364B1D26533C5FED_OFFSET))(a1, a2);
		}
	};
}
