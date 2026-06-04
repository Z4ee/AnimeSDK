#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1C60A581E4366C03_1;
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D7F5570CA0E8386B_1_GET_LATESTVERSION_OFFSET UNITYSDK_OFFSET(0x10C9A980)
#define CLASS_1_D7F5570CA0E8386B_1_METHOD_1_A2B8457F84547A2A_OFFSET UNITYSDK_OFFSET(0x10C9AD00)
#define CLASS_1_D7F5570CA0E8386B_1_METHOD_1_AD55B46C1D99DE57_OFFSET UNITYSDK_OFFSET(0x10C9A9A0)
#define CLASS_1_D7F5570CA0E8386B_1_SET_LATESTVERSION_OFFSET UNITYSDK_OFFSET(0x10C9A990)
#define CLASS_1_D7F5570CA0E8386B_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10C9ADE0)

inline static constexpr unsigned int Class_1_D7F5570CA0E8386B_1_TypeDefinitionIndex = 74434;

class Class_1_D7F5570CA0E8386B_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_2_1C60A581E4366C03_1*>* Field_1_0; // 0x10
	::System::Version* _latestVersion_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F5570CA0E8386B_1__CTOR_OFFSET))(this);
	}

	::System::Version* get_latestVersion()
	{
		return ((::System::Version*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7F5570CA0E8386B_1_GET_LATESTVERSION_OFFSET))(this);
	}

	::System::Void set_latestVersion(::System::Version* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Version*))((::PBYTE)hIl2Cpp + CLASS_1_D7F5570CA0E8386B_1_SET_LATESTVERSION_OFFSET))(this, a1);
	}

	::Class_2_1C60A581E4366C03_1* Method_1_AD55B46C1D99DE57(::System::Version* a1, ::System::Version* a2)
	{
		return ((::Class_2_1C60A581E4366C03_1*(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + CLASS_1_D7F5570CA0E8386B_1_METHOD_1_AD55B46C1D99DE57_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_A2B8457F84547A2A(::System::Version* a1, ::System::Version* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Version*, ::System::Version*))((::PBYTE)hIl2Cpp + CLASS_1_D7F5570CA0E8386B_1_METHOD_1_A2B8457F84547A2A_OFFSET))(this, a1, a2);
	}
};
