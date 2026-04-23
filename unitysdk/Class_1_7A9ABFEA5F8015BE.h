#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_310B46602BEB4586.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_407;
class Class_1_A58651510BF6ACD7;

#define CLASS_1_7A9ABFEA5F8015BE_CLEAR_OFFSET UNITYSDK_OFFSET(0x11C272E0)
#define CLASS_1_7A9ABFEA5F8015BE_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x11C27600)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_24AAE60BF3295DF7_OFFSET UNITYSDK_OFFSET(0x11C27380)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_368884BBCA3D2697_OFFSET UNITYSDK_OFFSET(0x11C273F0)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_586EB3004CA81B57_OFFSET UNITYSDK_OFFSET(0x11C271E0)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0x11C27630)
#define CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x11C27620)
#define CLASS_1_7A9ABFEA5F8015BE_SET_OWNER_OFFSET UNITYSDK_OFFSET(0x11C27610)
#define CLASS_1_7A9ABFEA5F8015BE__CTOR_OFFSET UNITYSDK_OFFSET(0x11C27640)

inline static constexpr unsigned int Class_1_7A9ABFEA5F8015BE_TypeDefinitionIndex = 49805;

class Class_1_7A9ABFEA5F8015BE : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_407* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_407* _Owner_k__BackingField; // 0x18
	::Class_0_16E4307DCC419505_407* Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::System::Boolean Field_1_5; // 0x30
	::RPG::GameCore::FixPoint Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_586EB3004CA81B57(::Class_0_16E4307DCC419505_407* a1, ::Class_0_16E4307DCC419505_407* a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_407*, ::Class_0_16E4307DCC419505_407*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_586EB3004CA81B57_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_24AAE60BF3295DF7(::RPG::GameCore::FixPoint& a1, ::Struct_2_310B46602BEB4586& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::Struct_2_310B46602BEB4586&))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_24AAE60BF3295DF7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_368884BBCA3D2697(::Class_1_A58651510BF6ACD7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A58651510BF6ACD7*))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_368884BBCA3D2697_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_407* get_Owner()
	{
		return ((::Class_0_16E4307DCC419505_407*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_GET_OWNER_OFFSET))(this);
	}

	::System::Void set_Owner(::Class_0_16E4307DCC419505_407* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_407*))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_SET_OWNER_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7A9ABFEA5F8015BE_METHOD_1_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}
};
