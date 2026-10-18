#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8903D5CF5E1CFFB8_CLASS_1_381FCBF1910E5961__CTOR_OFFSET UNITYSDK_OFFSET(0x165F0200)

inline static constexpr unsigned int Class_1_8903D5CF5E1CFFB8_Class_1_381FCBF1910E5961_TypeDefinitionIndex = 48943;

class Class_1_8903D5CF5E1CFFB8_Class_1_381FCBF1910E5961 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BDBKDJEFFHN; // 0x10
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* BFDEJBKPDLE; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + CLASS_1_8903D5CF5E1CFFB8_CLASS_1_381FCBF1910E5961__CTOR_OFFSET))(this, a1, a2);
	}
};
