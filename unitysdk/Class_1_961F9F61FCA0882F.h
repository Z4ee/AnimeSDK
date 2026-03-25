#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_961F9F61FCA0882F_METHOD_1_08F218FCDB10584E_OFFSET UNITYSDK_OFFSET(0x17A55470)
#define CLASS_1_961F9F61FCA0882F_METHOD_1_0C2933D6DD35D7EA_OFFSET UNITYSDK_OFFSET(0x17A554B0)
#define CLASS_1_961F9F61FCA0882F_METHOD_1_206A77CCE86EEF5B_OFFSET UNITYSDK_OFFSET(0x17A55670)
#define CLASS_1_961F9F61FCA0882F_METHOD_1_20B57EDB5F85ED80_OFFSET UNITYSDK_OFFSET(0x17A55820)
#define CLASS_1_961F9F61FCA0882F_METHOD_1_B9ADE8A541973865_OFFSET UNITYSDK_OFFSET(0x17A558F0)
#define CLASS_1_961F9F61FCA0882F_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x17A55430)
#define CLASS_1_961F9F61FCA0882F__CTOR_OFFSET UNITYSDK_OFFSET(0x17A55440)

inline static constexpr unsigned int Class_1_961F9F61FCA0882F_TypeDefinitionIndex = 8566;

class Class_1_961F9F61FCA0882F : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_1; // 0x10
	::Il2CppArray<::System::Single>* Field_1_2; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_961F9F61FCA0882F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_961F9F61FCA0882F_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Single Method_1_08F218FCDB10584E(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_961F9F61FCA0882F_METHOD_1_08F218FCDB10584E_OFFSET))(this, a1);
	}

	::RPG::MVector2 Method_1_0C2933D6DD35D7EA(::System::Int32 a1)
	{
		return ((::RPG::MVector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_961F9F61FCA0882F_METHOD_1_0C2933D6DD35D7EA_OFFSET))(this, a1);
	}

	::RPG::MVector3 Method_1_206A77CCE86EEF5B(::System::Int32 a1)
	{
		return ((::RPG::MVector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_961F9F61FCA0882F_METHOD_1_206A77CCE86EEF5B_OFFSET))(this, a1);
	}

	::Il2CppArray<::System::Single>* Method_1_20B57EDB5F85ED80(::System::Int32 a1)
	{
		return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_961F9F61FCA0882F_METHOD_1_20B57EDB5F85ED80_OFFSET))(this, a1);
	}

	::System::Void Method_1_B9ADE8A541973865(::System::Int32 a1, ::Il2CppArray<::System::Single>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + CLASS_1_961F9F61FCA0882F_METHOD_1_B9ADE8A541973865_OFFSET))(this, a1, a2);
	}
};
