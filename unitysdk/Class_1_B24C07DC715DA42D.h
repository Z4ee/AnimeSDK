#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyCellPeformanceType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B24C07DC715DA42D_METHOD_1_19EB53798E80EC9A_OFFSET UNITYSDK_OFFSET(0x19109540)
#define CLASS_1_B24C07DC715DA42D_METHOD_1_46203437EA3F6181_OFFSET UNITYSDK_OFFSET(0x19109D30)
#define CLASS_1_B24C07DC715DA42D_METHOD_1_81C9878334795E25_OFFSET UNITYSDK_OFFSET(0x19109C10)
#define CLASS_1_B24C07DC715DA42D_METHOD_1_8542E37E74FDE1B5_OFFSET UNITYSDK_OFFSET(0x19109640)
#define CLASS_1_B24C07DC715DA42D_METHOD_1_F5925D5AE6E6C6C0_OFFSET UNITYSDK_OFFSET(0x19109E30)
#define CLASS_1_B24C07DC715DA42D__CTOR_OFFSET UNITYSDK_OFFSET(0x1910A0A0)

inline static constexpr unsigned int Class_1_B24C07DC715DA42D_TypeDefinitionIndex = 66304;

class Class_1_B24C07DC715DA42D : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* IHEKIDJHBCB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* KPAADJNLHBL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonopolyCellPeformanceType>* JOAHDLJKOMF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B24C07DC715DA42D__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_19EB53798E80EC9A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B24C07DC715DA42D_METHOD_1_19EB53798E80EC9A_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_81C9878334795E25(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B24C07DC715DA42D_METHOD_1_81C9878334795E25_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8542E37E74FDE1B5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B24C07DC715DA42D_METHOD_1_8542E37E74FDE1B5_OFFSET))(this);
	}

	::RPG::GameCore::MonopolyCellPeformanceType Method_1_46203437EA3F6181(::System::String* a1)
	{
		return ((::RPG::GameCore::MonopolyCellPeformanceType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B24C07DC715DA42D_METHOD_1_46203437EA3F6181_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonopolyCellPeformanceType>* Method_1_F5925D5AE6E6C6C0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonopolyCellPeformanceType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B24C07DC715DA42D_METHOD_1_F5925D5AE6E6C6C0_OFFSET))(this);
	}
};
