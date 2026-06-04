#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_398;
class Class_2_DDE1D61870C38FA1;
namespace RPG::AvatarSystem::Property { template <typename T> class IPropertyModifier_1; }

#define CLASS_1_C36580B2D2D204E8_GETMODIFIER_OFFSET UNITYSDK_OFFSET(0xAD3FDC0)
#define CLASS_1_C36580B2D2D204E8__CTOR_OFFSET UNITYSDK_OFFSET(0xAD3FDB0)

inline static constexpr unsigned int Class_1_C36580B2D2D204E8_TypeDefinitionIndex = 58666;

class Class_1_C36580B2D2D204E8 : public ::System::Object
{
public:
	::Class_2_DDE1D61870C38FA1* Field_1_0; // 0x10

	::System::Void _ctor(::Class_2_DDE1D61870C38FA1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_DDE1D61870C38FA1*))((::PBYTE)hIl2Cpp + CLASS_1_C36580B2D2D204E8__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>* GetModifier(::Class_0_16E4307DCC419505_398* a1)
	{
		return ((::RPG::AvatarSystem::Property::IPropertyModifier_1<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::Class_0_16E4307DCC419505_398*))((::PBYTE)hIl2Cpp + CLASS_1_C36580B2D2D204E8_GETMODIFIER_OFFSET))(this, a1);
	}
};
