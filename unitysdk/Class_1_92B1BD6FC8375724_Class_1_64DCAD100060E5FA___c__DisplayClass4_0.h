#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_296A7AC90F028539;
class Class_1_92B1BD6FC8375724;
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define CLASS_1_92B1BD6FC8375724_CLASS_1_64DCAD100060E5FA___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17537A00)
#define CLASS_1_92B1BD6FC8375724_CLASS_1_64DCAD100060E5FA___C__DISPLAYCLASS4_0__SEND_G___SEND_0_OFFSET UNITYSDK_OFFSET(0x17537D80)

inline static constexpr unsigned int Class_1_92B1BD6FC8375724_Class_1_64DCAD100060E5FA___c__DisplayClass4_0_TypeDefinitionIndex = 66246;

class Class_1_92B1BD6FC8375724_Class_1_64DCAD100060E5FA___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::Class_1_296A7AC90F028539*>* promise; // 0x10
	::Class_1_92B1BD6FC8375724* req; // 0x18
	::UnityEngine::Networking::UnityWebRequest* unityReq; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_CLASS_1_64DCAD100060E5FA___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* _Send_g___Send_0()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92B1BD6FC8375724_CLASS_1_64DCAD100060E5FA___C__DISPLAYCLASS4_0__SEND_G___SEND_0_OFFSET))(this);
	}
};
