#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA4A8D0E8D5B736;
namespace RPG::GameCore { class PsActivityRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D92F88F8CC9E634B_METHOD_1_04DE4FBB293DFBD6_OFFSET UNITYSDK_OFFSET(0x12913BD0)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_2F92F619B2F44C41_OFFSET UNITYSDK_OFFSET(0x12913860)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_421487F15C7217B9_OFFSET UNITYSDK_OFFSET(0x12913D00)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x12913FC0)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_ACD91D865E237BC7_OFFSET UNITYSDK_OFFSET(0x12913E40)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_CCB93DB5F893C716_OFFSET UNITYSDK_OFFSET(0x12913C30)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_D978819B0A4871A0_OFFSET UNITYSDK_OFFSET(0x12913FA0)
#define CLASS_1_D92F88F8CC9E634B_METHOD_1_F9B7966EAEC825B3_OFFSET UNITYSDK_OFFSET(0x12913FD0)
#define CLASS_1_D92F88F8CC9E634B__CTOR_OFFSET UNITYSDK_OFFSET(0x12913840)

inline static constexpr unsigned int Class_1_D92F88F8CC9E634B_TypeDefinitionIndex = 61452;

class Class_1_D92F88F8CC9E634B : public ::System::Object
{
public:
	::RPG::GameCore::PsActivityRow* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_1_5DA4A8D0E8D5B736*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_2; // 0x20

	::System::Void _ctor(::RPG::GameCore::PsActivityRow* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PsActivityRow*))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_04DE4FBB293DFBD6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_04DE4FBB293DFBD6_OFFSET))(this, a1);
	}

	::Class_1_5DA4A8D0E8D5B736* Method_1_CCB93DB5F893C716(::System::UInt32 a1)
	{
		return ((::Class_1_5DA4A8D0E8D5B736*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_CCB93DB5F893C716_OFFSET))(this, a1);
	}

	::Class_1_5DA4A8D0E8D5B736* Method_1_421487F15C7217B9(::System::UInt32 a1)
	{
		return ((::Class_1_5DA4A8D0E8D5B736*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_421487F15C7217B9_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ACD91D865E237BC7()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_ACD91D865E237BC7_OFFSET))(this);
	}

	::System::UInt32 Method_1_D978819B0A4871A0()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_D978819B0A4871A0_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5DA4A8D0E8D5B736*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5DA4A8D0E8D5B736*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_F9B7966EAEC825B3()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_F9B7966EAEC825B3_OFFSET))(this);
	}

	::System::Void Method_1_2F92F619B2F44C41(::Il2CppArray<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D92F88F8CC9E634B_METHOD_1_2F92F619B2F44C41_OFFSET))(this, a1);
	}
};
