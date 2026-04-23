#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CachedAssetLogicType.h"
#include "unitysdk/System/Object.h"

class Class_1_AD0E6B89B0CA51A1_Class_1_0AF4E2D5648B3AA3;
class Class_1_AD0E6B89B0CA51A1_Class_1_AAD8A9B1F86750D2;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }

#define CLASS_1_AD0E6B89B0CA51A1_METHOD_1_00BAA1F06D051D82_OFFSET UNITYSDK_OFFSET(0xCD293E0)
#define CLASS_1_AD0E6B89B0CA51A1_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0xCD29C80)
#define CLASS_1_AD0E6B89B0CA51A1_METHOD_1_7A5A400D5EEF98BA_OFFSET UNITYSDK_OFFSET(0xCD29270)
#define CLASS_1_AD0E6B89B0CA51A1_METHOD_1_B9A97467188E4B69_OFFSET UNITYSDK_OFFSET(0xCD29730)
#define CLASS_1_AD0E6B89B0CA51A1_METHOD_1_E4AAF2D01919140A_OFFSET UNITYSDK_OFFSET(0xCD29BA0)
#define CLASS_1_AD0E6B89B0CA51A1_METHOD_1_EAF57323EA674398_OFFSET UNITYSDK_OFFSET(0xCD29060)
#define CLASS_1_AD0E6B89B0CA51A1__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2A020)

inline static constexpr unsigned int Class_1_AD0E6B89B0CA51A1_TypeDefinitionIndex = 45863;

class Class_1_AD0E6B89B0CA51A1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_AD0E6B89B0CA51A1_Class_1_0AF4E2D5648B3AA3*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_AD0E6B89B0CA51A1_Class_1_AAD8A9B1F86750D2*>* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD0E6B89B0CA51A1__CTOR_OFFSET))(this);
	}

	::Class_1_AD0E6B89B0CA51A1_Class_1_AAD8A9B1F86750D2* Method_1_EAF57323EA674398(::System::String* a1, ::System::Action_1<::UnityEngine::Object*>* a2)
	{
		return ((::Class_1_AD0E6B89B0CA51A1_Class_1_AAD8A9B1F86750D2*(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_AD0E6B89B0CA51A1_METHOD_1_EAF57323EA674398_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_7A5A400D5EEF98BA(::System::String* a1, ::UnityEngine::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + CLASS_1_AD0E6B89B0CA51A1_METHOD_1_7A5A400D5EEF98BA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_00BAA1F06D051D82(::System::String* a1, ::System::Action_1<::UnityEngine::Object*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + CLASS_1_AD0E6B89B0CA51A1_METHOD_1_00BAA1F06D051D82_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B9A97467188E4B69()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD0E6B89B0CA51A1_METHOD_1_B9A97467188E4B69_OFFSET))(this);
	}

	::System::Single Method_1_E4AAF2D01919140A(::System::String* a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AD0E6B89B0CA51A1_METHOD_1_E4AAF2D01919140A_OFFSET))(this, a1);
	}

	::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AD0E6B89B0CA51A1_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
	}
};
