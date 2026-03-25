#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D7003CCDED916330;
class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class FreeStyleAnimGroupEventConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_1_1798E0D824491486_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10A97F30)
#define CLASS_1_1798E0D824491486_METHOD_1_C18CDB8FD315E234_1_OFFSET UNITYSDK_OFFSET(0x10A97DC0)
#define CLASS_1_1798E0D824491486_METHOD_1_C18CDB8FD315E234_OFFSET UNITYSDK_OFFSET(0x10A97CF0)
#define CLASS_1_1798E0D824491486_METHOD_1_DCEFAFDD5C991493_OFFSET UNITYSDK_OFFSET(0x10A97E90)
#define CLASS_1_1798E0D824491486_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10A97A30)
#define CLASS_1_1798E0D824491486__CTOR_OFFSET UNITYSDK_OFFSET(0x10A97A50)

inline static constexpr unsigned int Class_1_1798E0D824491486_TypeDefinitionIndex = 46115;

class Class_1_1798E0D824491486 : public ::System::Object
{
public:
	::Il2CppArray<::System::Int32>* Field_1_3; // 0x10
	::RPG::GameCore::FreeStyleAnimGroupEventConfig* Field_1_2; // 0x18
	::Class_3_5775A4FEC79026BC* Field_1_5; // 0x20
	::Class_3_5775A4FEC79026BC* Field_1_6; // 0x28
	::System::Boolean Field_1_0; // 0x30
	::System::Boolean Field_1_1; // 0x31
	::System::Int32 Field_1_4; // 0x34

	::System::Void _ctor(::Class_1_D7003CCDED916330* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::FreeStyleAnimGroupEventConfig* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FreeStyleAnimGroupEventConfig*))((::PBYTE)hIl2Cpp + CLASS_1_1798E0D824491486__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1798E0D824491486_METHOD_1_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_1_C18CDB8FD315E234(::Class_1_D7003CCDED916330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330*))((::PBYTE)hIl2Cpp + CLASS_1_1798E0D824491486_METHOD_1_C18CDB8FD315E234_OFFSET))(this, a1);
	}

	::System::Void Method_1_C18CDB8FD315E234_1(::Class_1_D7003CCDED916330* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D7003CCDED916330*))((::PBYTE)hIl2Cpp + CLASS_1_1798E0D824491486_METHOD_1_C18CDB8FD315E234_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_DCEFAFDD5C991493(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_1798E0D824491486_METHOD_1_DCEFAFDD5C991493_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1798E0D824491486_DISPOSE_OFFSET))(this);
	}
};
