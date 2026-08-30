#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_457;
class Class_2_DDE1D61870C38FA1;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_3D46C5D064952E16_3_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0x115FF200)
#define CLASS_1_3D46C5D064952E16_3__CTOR_OFFSET UNITYSDK_OFFSET(0x115FF1F0)

inline static constexpr unsigned int Class_1_3D46C5D064952E16_3_TypeDefinitionIndex = 62783;

class Class_1_3D46C5D064952E16_3 : public ::System::Object
{
public:
	::Class_2_DDE1D61870C38FA1* IJKFLFBFMBF; // 0x10

	::System::Void _ctor(::Class_2_DDE1D61870C38FA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DDE1D61870C38FA1*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_3__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::Class_0_16E4307DCC419505_457* a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_0_16E4307DCC419505_457*))((::PBYTE)hIl2Cpp + CLASS_1_3D46C5D064952E16_3_GETMODIFIER_OFFSET))(this, a1);
	}
};
