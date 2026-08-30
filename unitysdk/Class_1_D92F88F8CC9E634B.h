#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA4A8D0E8D5B736;
namespace RPG::GameCore { class PsActivityRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D92F88F8CC9E634B_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x19CA4990)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_05CD40642A37C892_OFFSET UNITYSDK_OFFSET(0x19CA49F0)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_1418424D36C6EED2_OFFSET UNITYSDK_OFFSET(0x19CA4C10)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_241FCB0507EB9FA1_OFFSET UNITYSDK_OFFSET(0x19CA4DD0)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_2C63F9F15FF8B840_OFFSET UNITYSDK_OFFSET(0x19CA4550)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_5E04F840BB4ED061_OFFSET UNITYSDK_OFFSET(0x19CA4AC0)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x19CA4D80)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_B0197128EECEBEEF_OFFSET UNITYSDK_OFFSET(0x19CA4E10)
#define CLASS_1_D92F88F8CC9E634B__CTOR_OFFSET UNITYSDK_OFFSET(0x19CA4530)

inline static constexpr unsigned int Class_1_D92F88F8CC9E634B_TypeDefinitionIndex = 66736;

class Class_1_D92F88F8CC9E634B : public ::System::Object
{
public:
	::RPG::GameCore::PsActivityRow* IBPBJBOKKMF; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* CDLOJLOPKMB; // 0x18
	::System::Collections::Generic::List_1<::Class_1_5DA4A8D0E8D5B736*>* LFIPGNPEDLK; // 0x20

	::System::Void _ctor(::RPG::GameCore::PsActivityRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PsActivityRow*))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::Class_1_5DA4A8D0E8D5B736* Method_1_05CD40642A37C892(::System::UInt32 a1)
	{
		return ((::Class_1_5DA4A8D0E8D5B736*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_05CD40642A37C892_OFFSET))(this, a1);
	}

	::Class_1_5DA4A8D0E8D5B736* Method_1_5E04F840BB4ED061(::System::UInt32 a1)
	{
		return ((::Class_1_5DA4A8D0E8D5B736*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_5E04F840BB4ED061_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1418424D36C6EED2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_1418424D36C6EED2_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5DA4A8D0E8D5B736*>* Method_1_241FCB0507EB9FA1()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5DA4A8D0E8D5B736*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_241FCB0507EB9FA1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_B0197128EECEBEEF()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_B0197128EECEBEEF_OFFSET))(this);
	}

	::System::Void Method_1_2C63F9F15FF8B840(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_2C63F9F15FF8B840_OFFSET))(this, a1);
	}
};
