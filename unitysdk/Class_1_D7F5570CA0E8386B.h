#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1C60A581E4366C03;
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D7F5570CA0E8386B_METHOD_1_A2B8457F84547A2A_OFFSET UNITYSDK_OFFSET(0xA52AA10)
#define CLASS_1_D7F5570CA0E8386B_METHOD_1_AD55B46C1D99DE57_OFFSET UNITYSDK_OFFSET(0xA52A6B0)
#define CLASS_1_D7F5570CA0E8386B__CTOR_OFFSET UNITYSDK_OFFSET(0xA52AAF0)

inline static constexpr unsigned int Class_1_D7F5570CA0E8386B_TypeDefinitionIndex = 74433;

class Class_1_D7F5570CA0E8386B : public ::System::Object
{
public:
	::System::Version* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_1C60A581E4366C03*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F5570CA0E8386B__CTOR_OFFSET))(this);
	}

	::Class_2_1C60A581E4366C03* Method_1_AD55B46C1D99DE57(::System::Version* a1, ::System::Version* a2)
	{
		return ((::Class_2_1C60A581E4366C03*(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + CLASS_1_D7F5570CA0E8386B_METHOD_1_AD55B46C1D99DE57_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A2B8457F84547A2A(::System::Version* a1, ::System::Version* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + CLASS_1_D7F5570CA0E8386B_METHOD_1_A2B8457F84547A2A_OFFSET))(this, a1, a2);
	}
};
