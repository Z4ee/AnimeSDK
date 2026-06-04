#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_68841D2E219E78DE.h"
#include "unitysdk/System/Object.h"

class Class_1_4AE93C16C6CFCBFE;
namespace RPG::AvatarSystem { class AvatarSkin; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41BD87BD0ADE4B8D_METHOD_1_65E1866C5B9DEEA6_OFFSET UNITYSDK_OFFSET(0xCC0AAE0)
#define CLASS_1_41BD87BD0ADE4B8D_METHOD_1_D56D5592F4FC6324_OFFSET UNITYSDK_OFFSET(0xCC0A990)
#define CLASS_1_41BD87BD0ADE4B8D__CTOR_OFFSET UNITYSDK_OFFSET(0xCC0A8D0)

inline static constexpr unsigned int Class_1_41BD87BD0ADE4B8D_TypeDefinitionIndex = 58695;

class Class_1_41BD87BD0ADE4B8D : public ::System::Object
{
public:
	::Class_1_4AE93C16C6CFCBFE* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::Struct_2_68841D2E219E78DE, ::RPG::AvatarSystem::AvatarSkin*>* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_4AE93C16C6CFCBFE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4AE93C16C6CFCBFE*))((::PBYTE)hIl2Cpp + CLASS_1_41BD87BD0ADE4B8D__CTOR_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_D56D5592F4FC6324(::Struct_2_68841D2E219E78DE& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_68841D2E219E78DE&))((::PBYTE)hIl2Cpp + CLASS_1_41BD87BD0ADE4B8D_METHOD_1_D56D5592F4FC6324_OFFSET))(this, a1);
	}

	::RPG::AvatarSystem::AvatarSkin* Method_1_65E1866C5B9DEEA6(::Struct_2_68841D2E219E78DE& a1)
	{
		return ((::RPG::AvatarSystem::AvatarSkin*(*)(::PVOID, ::Struct_2_68841D2E219E78DE&))((::PBYTE)hIl2Cpp + CLASS_1_41BD87BD0ADE4B8D_METHOD_1_65E1866C5B9DEEA6_OFFSET))(this, a1);
	}
};
