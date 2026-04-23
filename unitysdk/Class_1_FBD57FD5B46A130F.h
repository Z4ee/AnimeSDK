#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeV2StarTargetData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FBD57FD5B46A130F_METHOD_1_0CDBB604C50CE9C3_OFFSET UNITYSDK_OFFSET(0xAA92760)
#define CLASS_1_FBD57FD5B46A130F_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xAA924A0)
#define CLASS_1_FBD57FD5B46A130F_METHOD_1_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0xAA92510)
#define CLASS_1_FBD57FD5B46A130F__CTOR_OFFSET UNITYSDK_OFFSET(0xAA92500)

inline static constexpr unsigned int Class_1_FBD57FD5B46A130F_TypeDefinitionIndex = 60794;

class Class_1_FBD57FD5B46A130F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MatchThreeV2StarTargetData*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBD57FD5B46A130F__CTOR_OFFSET))(this);
	}

	static ::Class_1_FBD57FD5B46A130F* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_FBD57FD5B46A130F*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FBD57FD5B46A130F_METHOD_1_9B39F7D7C1FF70D6_OFFSET))();
	}

	::System::Void Method_1_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FBD57FD5B46A130F_METHOD_1_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::RPG::Client::MatchThreeV2StarTargetData* Method_1_0CDBB604C50CE9C3(::System::UInt32 a1)
	{
		return ((::RPG::Client::MatchThreeV2StarTargetData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FBD57FD5B46A130F_METHOD_1_0CDBB604C50CE9C3_OFFSET))(this, a1);
	}
};
