#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A;
class Class_2_43D1AA62A6D00FFF;
class Class_3_F4528A5C0F861AF2;
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }

#define CLASS_1_8A9969DF5F01548D_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1090C8D0)
#define CLASS_1_8A9969DF5F01548D_1_METHOD_1_9C95DA85A4618543_OFFSET UNITYSDK_OFFSET(0x1090D450)
#define CLASS_1_8A9969DF5F01548D_1_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1090D4C0)
#define CLASS_1_8A9969DF5F01548D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1090C8B0)

inline static constexpr unsigned int Class_1_8A9969DF5F01548D_1_TypeDefinitionIndex = 62930;

class Class_1_8A9969DF5F01548D_1 : public ::System::Object
{
public:
	::Class_3_F4528A5C0F861AF2* Field_1_1; // 0x10
	::Class_2_43D1AA62A6D00FFF* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1, ::Class_3_F4528A5C0F861AF2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*, ::Class_3_F4528A5C0F861AF2*))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D_1_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D_1_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_9C95DA85A4618543(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_8A9969DF5F01548D_1_METHOD_1_9C95DA85A4618543_OFFSET))(this, a1);
	}
};
