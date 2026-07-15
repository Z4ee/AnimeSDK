#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037_METHOD_1_7CB2E169C8DF8FE3_OFFSET UNITYSDK_OFFSET(0x17BAC100)
#define CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037_METHOD_1_F463BCEC17C4D201_OFFSET UNITYSDK_OFFSET(0x17BAC200)
#define CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037__CTOR_OFFSET UNITYSDK_OFFSET(0x17BA9610)

inline static constexpr unsigned int Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037_TypeDefinitionIndex = 35784;

class Class_1_6D71C04EE4F62B55_Class_1_3A1B2E99409FD037 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_7CB2E169C8DF8FE3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037_METHOD_1_7CB2E169C8DF8FE3_OFFSET))(this);
	}

	::System::String* Method_1_F463BCEC17C4D201()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6D71C04EE4F62B55_CLASS_1_3A1B2E99409FD037_METHOD_1_F463BCEC17C4D201_OFFSET))(this);
	}
};
