#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarArchiveEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_AD8591A070E0B2C6_METHOD_1_0BB474307648814A_OFFSET UNITYSDK_OFFSET(0xBFF9760)
#define CLASS_1_AD8591A070E0B2C6_METHOD_1_136B3A366D0D45C9_OFFSET UNITYSDK_OFFSET(0xBFF8D00)
#define CLASS_1_AD8591A070E0B2C6_METHOD_1_8FA43D2E69ED42BC_OFFSET UNITYSDK_OFFSET(0xBFF9200)
#define CLASS_1_AD8591A070E0B2C6_METHOD_1_CCF2DF851B3DDDE4_OFFSET UNITYSDK_OFFSET(0xBFF8EB0)
#define CLASS_1_AD8591A070E0B2C6_METHOD_1_E9748B4B562551F9_OFFSET UNITYSDK_OFFSET(0xBFF9100)

inline static constexpr unsigned int Class_1_AD8591A070E0B2C6_TypeDefinitionIndex = 62417;

class Class_1_AD8591A070E0B2C6 : public ::System::Object
{
public:
	static ::System::Void Method_1_136B3A366D0D45C9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AD8591A070E0B2C6_METHOD_1_136B3A366D0D45C9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_CCF2DF851B3DDDE4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AD8591A070E0B2C6_METHOD_1_CCF2DF851B3DDDE4_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E9748B4B562551F9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AD8591A070E0B2C6_METHOD_1_E9748B4B562551F9_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_8FA43D2E69ED42BC(::System::UInt32 a1)
	{
		return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AD8591A070E0B2C6_METHOD_1_8FA43D2E69ED42BC_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>* Method_1_0BB474307648814A()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarArchiveEntry*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AD8591A070E0B2C6_METHOD_1_0BB474307648814A_OFFSET))();
	}
};
