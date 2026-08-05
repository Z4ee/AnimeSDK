#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6FBC1E619E8727FF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_14986121AA61AD99;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigPosRot; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3BA31D098F4DC5DA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xF0A9880)
#define CLASS_2_3BA31D098F4DC5DA_FROMFLX_OFFSET UNITYSDK_OFFSET(0xF0A9640)
#define CLASS_2_3BA31D098F4DC5DA_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xF0A9AA0)
#define CLASS_2_3BA31D098F4DC5DA_METHOD_2_0E6B3B46B8F6E777_OFFSET UNITYSDK_OFFSET(0xF0A9270)
#define CLASS_2_3BA31D098F4DC5DA_METHOD_2_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0xF0A98E0)
#define CLASS_2_3BA31D098F4DC5DA_METHOD_2_5253759692D6DAC1_OFFSET UNITYSDK_OFFSET(0xF0A96C0)
#define CLASS_2_3BA31D098F4DC5DA_METHOD_2_AB03A5431BB5BD9E_OFFSET UNITYSDK_OFFSET(0xF0A9DB0)
#define CLASS_2_3BA31D098F4DC5DA_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0xF0A94E0)
#define CLASS_2_3BA31D098F4DC5DA_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0xF0A9630)
#define CLASS_2_3BA31D098F4DC5DA_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xF0A9C50)
#define CLASS_2_3BA31D098F4DC5DA_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xF0A9530)
#define CLASS_2_3BA31D098F4DC5DA__CTOR_OFFSET UNITYSDK_OFFSET(0xF0A9A90)

inline static constexpr unsigned int Class_2_3BA31D098F4DC5DA_TypeDefinitionIndex = 73708;

class Class_2_3BA31D098F4DC5DA : public ::Class_1_6FBC1E619E8727FF
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigPosRot*>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0E6B3B46B8F6E777(::MoleMole::Battle::Entity* a1, ::Class_2_14986121AA61AD99* a2, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F_1>*& a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F_1>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_METHOD_2_0E6B3B46B8F6E777_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::Class_1_6FBC1E619E8727FF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_6FBC1E619E8727FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_2_3BA31D098F4DC5DA* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_3BA31D098F4DC5DA*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_5253759692D6DAC1(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_METHOD_2_5253759692D6DAC1_OFFSET))(this, a1);
	}

	static ::Class_2_3BA31D098F4DC5DA* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_3BA31D098F4DC5DA*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Void Method_2_AB03A5431BB5BD9E(::MoleMole::Battle::Entity* a1, ::Class_2_14986121AA61AD99* a2, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F_1>*& a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F_1>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_METHOD_2_AB03A5431BB5BD9E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Boolean Method_2_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3BA31D098F4DC5DA_METHOD_2_157E312840A3BD00_OFFSET))(this, a1, a2);
	}
};
