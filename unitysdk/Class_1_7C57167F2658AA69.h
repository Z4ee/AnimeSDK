#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_1A8148841049062A;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7C57167F2658AA69__CTOR_OFFSET UNITYSDK_OFFSET(0x1C628360)

inline static constexpr unsigned int Class_1_7C57167F2658AA69_TypeDefinitionIndex = 41579;

class Class_1_7C57167F2658AA69 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* JANOBFIFPLI; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* LJOOHOPBAJJ; // 0x18
	::Class_2_1A8148841049062A* LCINDEDLCLG; // 0x20
	::System::Single NGFAGMJHKJO; // 0x28
	::System::Int32 NJPFJJCLNFL; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C57167F2658AA69__CTOR_OFFSET))(this);
	}
};
