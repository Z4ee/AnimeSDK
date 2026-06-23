#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class String; }

#define MOLEMOLE_SIMPLESTRINGARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x19178A70)

namespace MoleMole
{
	inline static constexpr unsigned int SimpleStringArray_TypeDefinitionIndex = 86944;

	class SimpleStringArray : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::Il2CppArray<::System::String*>* texts; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SIMPLESTRINGARRAY__CTOR_OFFSET))(this);
		}
	};
}
