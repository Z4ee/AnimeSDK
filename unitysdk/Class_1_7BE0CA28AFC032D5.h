#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1341;
namespace Sofa { class BaseSofaUI3DWindow; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7BE0CA28AFC032D5_METHOD_1_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x1A0EF330)
#define CLASS_1_7BE0CA28AFC032D5_METHOD_1_1FD1F9CBED9E87D7_OFFSET UNITYSDK_OFFSET(0x1A0EEA00)
#define CLASS_1_7BE0CA28AFC032D5_METHOD_1_4B1A826666FC43AC_OFFSET UNITYSDK_OFFSET(0x1A0EEC50)
#define CLASS_1_7BE0CA28AFC032D5_METHOD_1_5B23F70339574615_1_OFFSET UNITYSDK_OFFSET(0x1A0EEEA0)
#define CLASS_1_7BE0CA28AFC032D5_METHOD_1_5B23F70339574615_OFFSET UNITYSDK_OFFSET(0x1A0EE700)
#define CLASS_1_7BE0CA28AFC032D5_METHOD_1_80DB7AD8D6D5425D_OFFSET UNITYSDK_OFFSET(0x1A0EF620)
#define CLASS_1_7BE0CA28AFC032D5_METHOD_1_90288C4892CFA531_OFFSET UNITYSDK_OFFSET(0x1A0EF020)
#define CLASS_1_7BE0CA28AFC032D5_METHOD_1_A12DAB7A1C07C3DA_OFFSET UNITYSDK_OFFSET(0x1A0EF480)
#define CLASS_1_7BE0CA28AFC032D5__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0EE4D0)

inline static constexpr unsigned int Class_1_7BE0CA28AFC032D5_TypeDefinitionIndex = 79184;

class Class_1_7BE0CA28AFC032D5 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::Sofa::BaseSofaWindow*>* MLHKFHBHDKJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::Sofa::BaseSofaUI3DWindow*>* MIAJGJLGPOJ; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* PCAHNFJEMML; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* FKOEKIGAGAJ; // 0x28
	::Class_0_16E4307DCC419505_1341* NIBNJBOGMID; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_1341* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1341*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_5B23F70339574615(::System::Object* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5_METHOD_1_5B23F70339574615_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5B23F70339574615_1(::System::Object* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5_METHOD_1_5B23F70339574615_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5_METHOD_1_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A12DAB7A1C07C3DA(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5_METHOD_1_A12DAB7A1C07C3DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B1A826666FC43AC(::System::Object* a1, ::Sofa::BaseSofaWindow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Sofa::BaseSofaWindow*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5_METHOD_1_4B1A826666FC43AC_OFFSET))(this, a1, a2);
	}

	::Sofa::BaseSofaUI3DWindow* Method_1_90288C4892CFA531(::System::Object* a1, ::System::String* a2)
	{
		return ((::Sofa::BaseSofaUI3DWindow*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5_METHOD_1_90288C4892CFA531_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_80DB7AD8D6D5425D(::System::Object* a1, ::Sofa::BaseSofaUI3DWindow* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::Sofa::BaseSofaUI3DWindow*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5_METHOD_1_80DB7AD8D6D5425D_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_1FD1F9CBED9E87D7(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>* a1, ::System::Object* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7BE0CA28AFC032D5_METHOD_1_1FD1F9CBED9E87D7_OFFSET))(a1, a2, a3, a4);
	}
};
