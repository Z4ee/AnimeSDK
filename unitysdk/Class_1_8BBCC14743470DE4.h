#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_399;
class Class_1_090AB0EAA610410E;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class PreviewAvatarProxy; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8BBCC14743470DE4_METHOD_1_33EFBB3354ADAF59_OFFSET UNITYSDK_OFFSET(0x1400B400)
#define CLASS_1_8BBCC14743470DE4_METHOD_1_51210E3A85F90C04_OFFSET UNITYSDK_OFFSET(0x1400B560)
#define CLASS_1_8BBCC14743470DE4_METHOD_1_E6BB6C5A45D074B7_OFFSET UNITYSDK_OFFSET(0x1400B1D0)
#define CLASS_1_8BBCC14743470DE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1400B150)

inline static constexpr unsigned int Class_1_8BBCC14743470DE4_TypeDefinitionIndex = 58647;

class Class_1_8BBCC14743470DE4 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_399* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_AAD4F4215611A944, ::RPG::Client::PreviewAvatarProxy*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_399* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_399*))((::PBYTE)hIl2Cpp + CLASS_1_8BBCC14743470DE4__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_E6BB6C5A45D074B7(::Struct_2_AAD4F4215611A944& a1, ::Class_1_090AB0EAA610410E* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_8BBCC14743470DE4_METHOD_1_E6BB6C5A45D074B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33EFBB3354ADAF59(::RPG::Client::PreviewAvatarProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PreviewAvatarProxy*))((::PBYTE)hIl2Cpp + CLASS_1_8BBCC14743470DE4_METHOD_1_33EFBB3354ADAF59_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_51210E3A85F90C04(::Struct_2_AAD4F4215611A944& a1, ::Class_1_090AB0EAA610410E* a2)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&, ::Class_1_090AB0EAA610410E*))((::PBYTE)hIl2Cpp + CLASS_1_8BBCC14743470DE4_METHOD_1_51210E3A85F90C04_OFFSET))(this, a1, a2);
	}
};
