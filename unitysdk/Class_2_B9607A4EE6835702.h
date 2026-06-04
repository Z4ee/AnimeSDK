#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_384338DD03F999FE.h"

class Class_0_16E4307DCC419505_43;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_B9607A4EE6835702_METHOD_2_642FA3749BBD044D_OFFSET UNITYSDK_OFFSET(0x18A9B450)
#define CLASS_2_B9607A4EE6835702__CTOR_OFFSET UNITYSDK_OFFSET(0x18A9B3D0)

inline static constexpr unsigned int Class_2_B9607A4EE6835702_TypeDefinitionIndex = 34684;

class Class_2_B9607A4EE6835702 : public ::Class_1_384338DD03F999FE
{
public:
	::RPG::Client::RPGProfilerMarker* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_43* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_43*))((::PBYTE)hIl2Cpp + CLASS_2_B9607A4EE6835702__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_642FA3749BBD044D(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_B9607A4EE6835702_METHOD_2_642FA3749BBD044D_OFFSET))(this, a1, a2);
	}
};
