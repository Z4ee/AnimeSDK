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

#define CLASS_2_5AE0CAB473413A52_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x14E71430)
#define CLASS_2_5AE0CAB473413A52_FROMFLX_OFFSET UNITYSDK_OFFSET(0x14E70510)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x14E70590)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x14E71C80)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_5C90773220FA8136_OFFSET UNITYSDK_OFFSET(0x14E70390)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_654FFD98884CDDEC_OFFSET UNITYSDK_OFFSET(0x14E70300)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_6A6D1ECB93526332_OFFSET UNITYSDK_OFFSET(0x14E71490)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_AB03A5431BB5BD9E_OFFSET UNITYSDK_OFFSET(0x14E719F0)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x14E70500)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x14E71B20)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x14E70400)
#define CLASS_2_5AE0CAB473413A52_METHOD_2_DE8241D3D65634C6_OFFSET UNITYSDK_OFFSET(0x14E6FA80)
#define CLASS_2_5AE0CAB473413A52__CTOR_OFFSET UNITYSDK_OFFSET(0x14E719E0)

inline static constexpr unsigned int Class_2_5AE0CAB473413A52_TypeDefinitionIndex = 43320;

class Class_2_5AE0CAB473413A52 : public ::Class_1_6FBC1E619E8727FF
{
public:
	::MoleMole::Config::ConfigPosRot* Field_2_2; // 0x10
	::MoleMole::Config::ConfigPosRot* Field_2_1; // 0x18
	::System::Single Field_2_7; // 0x20
	::System::Single Field_2_5; // 0x24
	::UnityEngine::Vector3 Field_2_11; // 0x28
	::System::Single Field_2_0; // 0x34
	::System::Single Field_2_6; // 0x38
	::System::Single Field_2_4; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_DE8241D3D65634C6(::MoleMole::Battle::Entity* a1, ::Class_2_14986121AA61AD99* a2, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F_1>*& a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F_1>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_DE8241D3D65634C6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_5C90773220FA8136(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_5C90773220FA8136_OFFSET))(this, a1);
	}

	::Class_1_6FBC1E619E8727FF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_6FBC1E619E8727FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AB03A5431BB5BD9E(::MoleMole::Battle::Entity* a1, ::Class_2_14986121AA61AD99* a2, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F_1>*& a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F_1>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_AB03A5431BB5BD9E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	static ::Class_2_5AE0CAB473413A52* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_5AE0CAB473413A52*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_654FFD98884CDDEC(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_654FFD98884CDDEC_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_6A6D1ECB93526332(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_6A6D1ECB93526332_OFFSET))(this, a1, a2);
	}

	static ::Class_2_5AE0CAB473413A52* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_5AE0CAB473413A52*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5AE0CAB473413A52_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
