#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define CLASS_2_AC26CDA148317D2B_METHOD_2_16B3819A897EC496_OFFSET UNITYSDK_OFFSET(0x11B4AE00)
#define CLASS_2_AC26CDA148317D2B_METHOD_2_1AB1D0F0E30360EE_OFFSET UNITYSDK_OFFSET(0x11B4AB60)
#define CLASS_2_AC26CDA148317D2B_METHOD_2_48838CDCB359D9A4_OFFSET UNITYSDK_OFFSET(0x11B4A9F0)
#define CLASS_2_AC26CDA148317D2B_METHOD_2_51AC7912135C5E23_OFFSET UNITYSDK_OFFSET(0x11B4AAC0)
#define CLASS_2_AC26CDA148317D2B_METHOD_2_5D5D73F48D336906_1_OFFSET UNITYSDK_OFFSET(0x11B4B020)
#define CLASS_2_AC26CDA148317D2B_METHOD_2_5D5D73F48D336906_OFFSET UNITYSDK_OFFSET(0x11B4AD50)
#define CLASS_2_AC26CDA148317D2B_METHOD_2_776272FEED5AE92B_OFFSET UNITYSDK_OFFSET(0x11B4A980)
#define CLASS_2_AC26CDA148317D2B_METHOD_2_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x11B4B0D0)
#define CLASS_2_AC26CDA148317D2B__CTOR_OFFSET UNITYSDK_OFFSET(0x11B4A900)

inline static constexpr unsigned int Class_2_AC26CDA148317D2B_TypeDefinitionIndex = 54755;

class Class_2_AC26CDA148317D2B : public ::RPG::Client::PrefGroup
{
public:
	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AC26CDA148317D2B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_776272FEED5AE92B()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC26CDA148317D2B_METHOD_2_776272FEED5AE92B_OFFSET))(this);
	}

	::System::Void Method_2_48838CDCB359D9A4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_AC26CDA148317D2B_METHOD_2_48838CDCB359D9A4_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_1AB1D0F0E30360EE(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AC26CDA148317D2B_METHOD_2_1AB1D0F0E30360EE_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D5D73F48D336906(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AC26CDA148317D2B_METHOD_2_5D5D73F48D336906_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_16B3819A897EC496(::System::String* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_AC26CDA148317D2B_METHOD_2_16B3819A897EC496_OFFSET))(this, a1);
	}

	::System::Void Method_2_5D5D73F48D336906_1(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_AC26CDA148317D2B_METHOD_2_5D5D73F48D336906_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC26CDA148317D2B_METHOD_2_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Void Method_2_51AC7912135C5E23()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC26CDA148317D2B_METHOD_2_51AC7912135C5E23_OFFSET))(this);
	}
};
