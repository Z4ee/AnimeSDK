#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyCellPeformanceType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_98AD6E7E8D38916A_METHOD_1_331DB481D82394A4_OFFSET UNITYSDK_OFFSET(0x11581D30)
#define CLASS_1_98AD6E7E8D38916A_METHOD_1_3ABEF3AC048CCD47_OFFSET UNITYSDK_OFFSET(0x11581440)
#define CLASS_1_98AD6E7E8D38916A_METHOD_1_46203437EA3F6181_OFFSET UNITYSDK_OFFSET(0x11581C20)
#define CLASS_1_98AD6E7E8D38916A_METHOD_1_89553A998583D62F_OFFSET UNITYSDK_OFFSET(0x11581B80)
#define CLASS_1_98AD6E7E8D38916A_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x11581520)
#define CLASS_1_98AD6E7E8D38916A__CTOR_OFFSET UNITYSDK_OFFSET(0x11581F20)

inline static constexpr unsigned int Class_1_98AD6E7E8D38916A_TypeDefinitionIndex = 53876;

class Class_1_98AD6E7E8D38916A : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonopolyCellPeformanceType>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AD6E7E8D38916A__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_3ABEF3AC048CCD47(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98AD6E7E8D38916A_METHOD_1_3ABEF3AC048CCD47_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_1_89553A998583D62F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_98AD6E7E8D38916A_METHOD_1_89553A998583D62F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AD6E7E8D38916A_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::RPG::GameCore::MonopolyCellPeformanceType Method_1_46203437EA3F6181(::System::String* a1)
	{
		return ((::RPG::GameCore::MonopolyCellPeformanceType(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_98AD6E7E8D38916A_METHOD_1_46203437EA3F6181_OFFSET))(this, a1);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonopolyCellPeformanceType>* Method_1_331DB481D82394A4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::MonopolyCellPeformanceType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_98AD6E7E8D38916A_METHOD_1_331DB481D82394A4_OFFSET))(this);
	}
};
