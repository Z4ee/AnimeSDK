#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_393;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4A1E1A2A92C28C88_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x13A746D0)
#define CLASS_1_4A1E1A2A92C28C88_METHOD_1_8F6A1B72899F4EA4_OFFSET UNITYSDK_OFFSET(0x13A747A0)
#define CLASS_1_4A1E1A2A92C28C88_METHOD_1_BFC885D4E448CE1E_OFFSET UNITYSDK_OFFSET(0x13A74530)
#define CLASS_1_4A1E1A2A92C28C88_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x13A74680)
#define CLASS_1_4A1E1A2A92C28C88_METHOD_1_F95F3A5391026EDC_OFFSET UNITYSDK_OFFSET(0x13A74720)

inline static constexpr unsigned int Class_1_4A1E1A2A92C28C88_TypeDefinitionIndex = 78225;

class Class_1_4A1E1A2A92C28C88 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_393*>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_393*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A1E1A2A92C28C88_TypeDefinitionIndex)->GetStaticField(0x51350);
	}

	static ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_393*>* Method_1_BFC885D4E448CE1E(::System::Int32 a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_393*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4A1E1A2A92C28C88_METHOD_1_BFC885D4E448CE1E_OFFSET))(a1);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A1E1A2A92C28C88_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_393*>* Method_1_F95F3A5391026EDC()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_2_208CC9941471731A_393*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A1E1A2A92C28C88_METHOD_1_F95F3A5391026EDC_OFFSET))();
	}

	static ::System::Void Method_1_8F6A1B72899F4EA4()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A1E1A2A92C28C88_METHOD_1_8F6A1B72899F4EA4_OFFSET))();
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A1E1A2A92C28C88_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}
};
