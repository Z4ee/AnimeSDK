#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_AAD4F4215611A944.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_674;
class Class_2_41C17A8CE292A213;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1ADD9E291D1E5C4F_METHOD_1_522DA0DFB575B39A_OFFSET UNITYSDK_OFFSET(0x92908C0)
#define CLASS_1_1ADD9E291D1E5C4F_METHOD_1_E2D81AE7930CE225_OFFSET UNITYSDK_OFFSET(0x9290AB0)
#define CLASS_1_1ADD9E291D1E5C4F__CTOR_OFFSET UNITYSDK_OFFSET(0x92907B0)

inline static constexpr unsigned int Class_1_1ADD9E291D1E5C4F_TypeDefinitionIndex = 57877;

class Class_1_1ADD9E291D1E5C4F : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_674* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_AAD4F4215611A944, ::RPG::AvatarSystem::Avatar*>* Field_1_2; // 0x18
	::Class_2_41C17A8CE292A213* Field_1_1; // 0x20

	::System::Void _ctor(::Class_0_16E4307DCC419505_674* a1, ::Class_2_41C17A8CE292A213* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_674*, ::Class_2_41C17A8CE292A213*))((::PBYTE)hIl2Cpp + CLASS_1_1ADD9E291D1E5C4F__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_522DA0DFB575B39A(::Struct_2_AAD4F4215611A944& a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::Struct_2_AAD4F4215611A944&))((::PBYTE)hIl2Cpp + CLASS_1_1ADD9E291D1E5C4F_METHOD_1_522DA0DFB575B39A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E2D81AE7930CE225(::RPG::AvatarSystem::Avatar* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::Avatar*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1ADD9E291D1E5C4F_METHOD_1_E2D81AE7930CE225_OFFSET))(this, a1, a2);
	}
};
