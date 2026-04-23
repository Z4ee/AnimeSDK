#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8FA131E93D046711;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D3D14052A5904019_GET_DIALOGUELIST_OFFSET UNITYSDK_OFFSET(0x11879620)
#define CLASS_1_D3D14052A5904019_SET_DIALOGUELIST_OFFSET UNITYSDK_OFFSET(0x11879630)
#define CLASS_1_D3D14052A5904019__CTOR_OFFSET UNITYSDK_OFFSET(0x11879640)

inline static constexpr unsigned int Class_1_D3D14052A5904019_TypeDefinitionIndex = 58025;

class Class_1_D3D14052A5904019 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_8FA131E93D046711*>* _DialogueList_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_8FA131E93D046711*>* get_DialogueList()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_8FA131E93D046711*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_GET_DIALOGUELIST_OFFSET))(this);
	}

	::System::Void set_DialogueList(::System::Collections::Generic::List_1<::Class_1_8FA131E93D046711*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_8FA131E93D046711*>*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_SET_DIALOGUELIST_OFFSET))(this, value);
	}
};
