#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_167BB37617B940E3;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6FBC1E619E8727FF_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x107F3B30)
#define CLASS_1_6FBC1E619E8727FF_FROMFLX_OFFSET UNITYSDK_OFFSET(0x107F3AC0)
#define CLASS_1_6FBC1E619E8727FF_METHOD_1_222B45776093C097_OFFSET UNITYSDK_OFFSET(0x107F3C30)
#define CLASS_1_6FBC1E619E8727FF_METHOD_1_8E0BD87CCAFEC0AF_OFFSET UNITYSDK_OFFSET(0x107F3B60)
#define CLASS_1_6FBC1E619E8727FF_METHOD_1_9B00DC6B301F3F39_OFFSET UNITYSDK_OFFSET(0x107F3B40)
#define CLASS_1_6FBC1E619E8727FF_METHOD_1_A042C46DE73C3043_OFFSET UNITYSDK_OFFSET(0x107F3940)
#define CLASS_1_6FBC1E619E8727FF_METHOD_1_AB03A5431BB5BD9E_OFFSET UNITYSDK_OFFSET(0x107F3890)
#define CLASS_1_6FBC1E619E8727FF_METHOD_1_C444D4C8B9D548AF_OFFSET UNITYSDK_OFFSET(0x107F3A50)
#define CLASS_1_6FBC1E619E8727FF_METHOD_1_D4DA1493472613E6_OFFSET UNITYSDK_OFFSET(0x107F3B20)
#define CLASS_1_6FBC1E619E8727FF_METHOD_1_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x107F3950)
#define CLASS_1_6FBC1E619E8727FF__CTOR_OFFSET UNITYSDK_OFFSET(0x107F3B50)

inline static constexpr unsigned int Class_1_6FBC1E619E8727FF_TypeDefinitionIndex = 47792;

class Class_1_6FBC1E619E8727FF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AB03A5431BB5BD9E(::MoleMole::Battle::Entity* a1, ::Class_2_167BB37617B940E3* a2, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F>*& a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Int32 a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_2_167BB37617B940E3*, ::System::Collections::Generic::List_1<::Struct_2_FC595D1A561D8C6F>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_METHOD_1_AB03A5431BB5BD9E_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_A042C46DE73C3043(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_METHOD_1_A042C46DE73C3043_OFFSET))(this, a1);
	}

	::Class_1_6FBC1E619E8727FF* Method_1_D8A163211C06267F()
	{
		return ((::Class_1_6FBC1E619E8727FF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_METHOD_1_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_1_C444D4C8B9D548AF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_METHOD_1_C444D4C8B9D548AF_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_FROMBINARY_OFFSET))(this, a1, a2);
	}

	static ::Class_1_6FBC1E619E8727FF* Method_1_8E0BD87CCAFEC0AF(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_1_6FBC1E619E8727FF*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_METHOD_1_8E0BD87CCAFEC0AF_OFFSET))(a1);
	}

	static ::Class_1_6FBC1E619E8727FF* Method_1_222B45776093C097(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_1_6FBC1E619E8727FF*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_METHOD_1_222B45776093C097_OFFSET))(a1, a2);
	}

	::System::Boolean Method_1_D4DA1493472613E6(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_METHOD_1_D4DA1493472613E6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9B00DC6B301F3F39(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6FBC1E619E8727FF_METHOD_1_9B00DC6B301F3F39_OFFSET))(this, a1, a2);
	}
};
