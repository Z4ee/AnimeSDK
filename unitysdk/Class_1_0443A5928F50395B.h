#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_147;
namespace System { class String; }

#define CLASS_1_0443A5928F50395B_METHOD_1_62732C470C208F12_OFFSET UNITYSDK_OFFSET(0x16879700)
#define CLASS_1_0443A5928F50395B__CTOR_OFFSET UNITYSDK_OFFSET(0x16879780)

inline static constexpr unsigned int Class_1_0443A5928F50395B_TypeDefinitionIndex = 61193;

class Class_1_0443A5928F50395B : public ::System::Object
{
public:
	// static const ::System::String* PPMDHDKGHNF; // 0x0
	// static const ::System::String* IDDCGKHFNKP; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0443A5928F50395B__CTOR_OFFSET))(this);
	}

	static ::Class_1_43BD383C98B4C0C5_147* Method_1_62732C470C208F12(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_43BD383C98B4C0C5_147*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0443A5928F50395B_METHOD_1_62732C470C208F12_OFFSET))(a1, a2);
	}
};
