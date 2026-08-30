#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_419;
class Class_1_65EF9EC87B818BF3;
namespace RPG::AvatarSystem { class IAvatar; }

#define CLASS_1_4F4E9B14BB25C718_METHOD_1_17DE5A393EEEC8C7_OFFSET UNITYSDK_OFFSET(0xBA2DBC0)
#define CLASS_1_4F4E9B14BB25C718_METHOD_1_B5B41E09176C0E3D_OFFSET UNITYSDK_OFFSET(0xBA2D930)
#define CLASS_1_4F4E9B14BB25C718__CTOR_OFFSET UNITYSDK_OFFSET(0xBA2DDD0)

inline static constexpr unsigned int Class_1_4F4E9B14BB25C718_TypeDefinitionIndex = 62926;

class Class_1_4F4E9B14BB25C718 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F4E9B14BB25C718__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_B5B41E09176C0E3D(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_65EF9EC87B818BF3* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_4F4E9B14BB25C718_METHOD_1_B5B41E09176C0E3D_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_419* Method_1_17DE5A393EEEC8C7(::Class_0_16E4307DCC419505_419* a1, ::RPG::AvatarSystem::IAvatar* a2, ::Class_1_65EF9EC87B818BF3* a3)
	{
		return ((::Class_0_16E4307DCC419505_419*(*)(::PVOID, ::Class_0_16E4307DCC419505_419*, ::RPG::AvatarSystem::IAvatar*, ::Class_1_65EF9EC87B818BF3*))((::PBYTE)hIl2Cpp + CLASS_1_4F4E9B14BB25C718_METHOD_1_17DE5A393EEEC8C7_OFFSET))(this, a1, a2, a3);
	}
};
