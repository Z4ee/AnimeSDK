#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_12ABE890CAA92AB9_METHOD_1_2CD49A0EAC7162BE_OFFSET UNITYSDK_OFFSET(0x162BFA40)
#define CLASS_1_12ABE890CAA92AB9_METHOD_1_30486951A69C066B_OFFSET UNITYSDK_OFFSET(0x162BFEF0)
#define CLASS_1_12ABE890CAA92AB9_METHOD_1_3ACD76C7F548B61E_OFFSET UNITYSDK_OFFSET(0x162BFFB0)
#define CLASS_1_12ABE890CAA92AB9_METHOD_1_580B926F5C52ECD8_OFFSET UNITYSDK_OFFSET(0x162C07D0)
#define CLASS_1_12ABE890CAA92AB9_METHOD_1_8A5D97B1DC91D305_OFFSET UNITYSDK_OFFSET(0x162BFA80)
#define CLASS_1_12ABE890CAA92AB9_METHOD_1_E7EF6BC52B28648C_OFFSET UNITYSDK_OFFSET(0x162BFE00)
#define CLASS_1_12ABE890CAA92AB9_METHOD_1_F3EED4A2062C5ADB_OFFSET UNITYSDK_OFFSET(0x162C0070)
#define CLASS_1_12ABE890CAA92AB9_METHOD_1_F631551F6BB1870F_OFFSET UNITYSDK_OFFSET(0x162C0320)
#define CLASS_1_12ABE890CAA92AB9__CTOR_OFFSET UNITYSDK_OFFSET(0x162C08F0)

inline static constexpr unsigned int Class_1_12ABE890CAA92AB9_TypeDefinitionIndex = 56481;

class Class_1_12ABE890CAA92AB9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* IHFMCMFBHLH; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UInt32>* GJJBKFGELLP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12ABE890CAA92AB9__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* Method_1_2CD49A0EAC7162BE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12ABE890CAA92AB9_METHOD_1_2CD49A0EAC7162BE_OFFSET))(this);
	}

	::System::Void Method_1_8A5D97B1DC91D305(::Class_1_12ABE890CAA92AB9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_12ABE890CAA92AB9*))((::PBYTE)hIl2Cpp + CLASS_1_12ABE890CAA92AB9_METHOD_1_8A5D97B1DC91D305_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7EF6BC52B28648C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12ABE890CAA92AB9_METHOD_1_E7EF6BC52B28648C_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_30486951A69C066B(::System::String* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_12ABE890CAA92AB9_METHOD_1_30486951A69C066B_OFFSET))(this, a1);
	}

	::System::Void Method_1_3ACD76C7F548B61E(::System::String* a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_12ABE890CAA92AB9_METHOD_1_3ACD76C7F548B61E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F3EED4A2062C5ADB(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_12ABE890CAA92AB9_METHOD_1_F3EED4A2062C5ADB_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F631551F6BB1870F(::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_12ABE890CAA92AB9_METHOD_1_F631551F6BB1870F_OFFSET))(this, a1);
	}

	::System::Void Method_1_580B926F5C52ECD8(::System::String* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_12ABE890CAA92AB9_METHOD_1_580B926F5C52ECD8_OFFSET))(this, a1, a2);
	}
};
