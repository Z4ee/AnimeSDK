#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_51EFDDDB522DF6D2;
class Class_3_EC53D188C4B2AE7E;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A59EE1243610BE23_METHOD_1_319FFA9E947BAB13_OFFSET UNITYSDK_OFFSET(0x13A0A880)
#define CLASS_1_A59EE1243610BE23_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x13A0AA40)
#define CLASS_1_A59EE1243610BE23_METHOD_1_4FAAC351C4E5BE30_OFFSET UNITYSDK_OFFSET(0x13A0AA50)
#define CLASS_1_A59EE1243610BE23_METHOD_1_5D060AEFC9F7D9B8_OFFSET UNITYSDK_OFFSET(0x13A0AB30)
#define CLASS_1_A59EE1243610BE23_METHOD_1_9F7472255255C950_OFFSET UNITYSDK_OFFSET(0x13A0AB40)
#define CLASS_1_A59EE1243610BE23__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0A660)

inline static constexpr unsigned int Class_1_A59EE1243610BE23_TypeDefinitionIndex = 72776;

class Class_1_A59EE1243610BE23 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_51EFDDDB522DF6D2*>* Field_1_5; // 0x10
	::Class_3_EC53D188C4B2AE7E* Field_1_0; // 0x18
	::System::UInt64 Field_1_1; // 0x20
	::System::UInt64 Field_1_4; // 0x28
	::System::UInt64 Field_1_2; // 0x30
	::System::UInt64 Field_1_3; // 0x38

	::System::Void _ctor(::Class_3_EC53D188C4B2AE7E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EC53D188C4B2AE7E*))((::PBYTE)hIl2Cpp + CLASS_1_A59EE1243610BE23__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_319FFA9E947BAB13()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59EE1243610BE23_METHOD_1_319FFA9E947BAB13_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_51EFDDDB522DF6D2*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_51EFDDDB522DF6D2*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59EE1243610BE23_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::String* Method_1_4FAAC351C4E5BE30()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59EE1243610BE23_METHOD_1_4FAAC351C4E5BE30_OFFSET))(this);
	}

	::System::Void Method_1_5D060AEFC9F7D9B8(::System::Collections::Generic::List_1<::Class_1_51EFDDDB522DF6D2*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_51EFDDDB522DF6D2*>*))((::PBYTE)hIl2Cpp + CLASS_1_A59EE1243610BE23_METHOD_1_5D060AEFC9F7D9B8_OFFSET))(this, a1);
	}

	::System::String* Method_1_9F7472255255C950()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A59EE1243610BE23_METHOD_1_9F7472255255C950_OFFSET))(this);
	}
};
