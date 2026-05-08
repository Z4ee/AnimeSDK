#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1747DAB17F36B4DF;

#define CLASS_1_F73858922FF6B712_INIT_OFFSET UNITYSDK_OFFSET(0xE8EB8A0)
#define CLASS_1_F73858922FF6B712_METHOD_1_B64C60973842FE45_OFFSET UNITYSDK_OFFSET(0xE8EB910)
#define CLASS_1_F73858922FF6B712_ONSYNC_OFFSET UNITYSDK_OFFSET(0xE8EB330)
#define CLASS_1_F73858922FF6B712_POLISH_OFFSET UNITYSDK_OFFSET(0xE8EB7D0)
#define CLASS_1_F73858922FF6B712_RECYCLE_OFFSET UNITYSDK_OFFSET(0xE8EB810)
#define CLASS_1_F73858922FF6B712__CTOR_OFFSET UNITYSDK_OFFSET(0xE8EB900)

inline static constexpr unsigned int Class_1_F73858922FF6B712_TypeDefinitionIndex = 49227;

class Class_1_F73858922FF6B712 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F73858922FF6B712__CTOR_OFFSET))(this);
	}

	::System::Void OnSync(::Class_1_1747DAB17F36B4DF* a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F73858922FF6B712_ONSYNC_OFFSET))(this, a1, a2);
	}

	::System::Void Polish()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F73858922FF6B712_POLISH_OFFSET))(this);
	}

	::System::Void Recycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F73858922FF6B712_RECYCLE_OFFSET))(this);
	}

	::System::Void Init(::Class_1_1747DAB17F36B4DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1747DAB17F36B4DF*))((::PBYTE)hIl2Cpp + CLASS_1_F73858922FF6B712_INIT_OFFSET))(this, a1);
	}

	static ::Class_1_F73858922FF6B712* Method_1_B64C60973842FE45()
	{
		return ((::Class_1_F73858922FF6B712*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F73858922FF6B712_METHOD_1_B64C60973842FE45_OFFSET))();
	}
};
