#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1DAEAAA43D28FC47_METHOD_1_877DE3FFFDF5133E_OFFSET UNITYSDK_OFFSET(0xCA5BB00)
#define CLASS_1_1DAEAAA43D28FC47__CTOR_OFFSET UNITYSDK_OFFSET(0xCA5BEC0)

inline static constexpr unsigned int Class_1_1DAEAAA43D28FC47_TypeDefinitionIndex = 56270;

class Class_1_1DAEAAA43D28FC47 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Byte>** StaticGet_DMMAEFCLCHK()
	{
		return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1DAEAAA43D28FC47_TypeDefinitionIndex)->GetStaticField(0x58710);
	}
	// static const ::System::Int32 DIAMHJPOGOH = 0xC; // 0x0
	::System::Collections::Generic::List_1<::System::UInt32>* HPAEMDIADDL; // 0x10
	::System::UInt32 JKHKAADJAEN; // 0x18
	::System::UInt32 GEPHKCPLAJF; // 0x1C
	::System::UInt32 OGBEHKGJFAF; // 0x20
	::System::UInt32 FICENPFBEBB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAEAAA43D28FC47__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_877DE3FFFDF5133E()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1DAEAAA43D28FC47_METHOD_1_877DE3FFFDF5133E_OFFSET))(this);
	}
};
