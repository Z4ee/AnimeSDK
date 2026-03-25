#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1ADD9E291D1E5C4F;
class Class_1_51C207A003D4ADD6;
class Class_1_59D3E9FCEA43ACF7;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_EAEC0C0E8F6CC243_METHOD_1_EEBD2A815F980140_OFFSET UNITYSDK_OFFSET(0x1144EA00)
#define CLASS_1_EAEC0C0E8F6CC243__CTOR_OFFSET UNITYSDK_OFFSET(0x1144E910)

inline static constexpr unsigned int Class_1_EAEC0C0E8F6CC243_TypeDefinitionIndex = 50995;

class Class_1_EAEC0C0E8F6CC243 : public ::System::Object
{
public:
	::Class_1_51C207A003D4ADD6* Field_1_0; // 0x10
	::Class_1_59D3E9FCEA43ACF7* Field_1_1; // 0x18
	::Class_1_1ADD9E291D1E5C4F* Field_1_2; // 0x20

	::System::Void _ctor(::Class_1_51C207A003D4ADD6* a1, ::Class_1_59D3E9FCEA43ACF7* a2, ::Class_1_1ADD9E291D1E5C4F* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_51C207A003D4ADD6*, ::Class_1_59D3E9FCEA43ACF7*, ::Class_1_1ADD9E291D1E5C4F*))((::PBYTE)hIl2Cpp + CLASS_1_EAEC0C0E8F6CC243__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::RPG::AvatarSystem::IAvatar* Method_1_EEBD2A815F980140(::System::UInt32 a1)
	{
		return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EAEC0C0E8F6CC243_METHOD_1_EEBD2A815F980140_OFFSET))(this, a1);
	}
};
