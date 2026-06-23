#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5F938359207CCDBD.h"
#include "unitysdk/System/Object.h"

class Class_2_01B22E9930E7BB4D;
class Class_2_208CC9941471731A_257;
class Class_2_208CC9941471731A_565;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_2_5F54932385CBEA5E___C_METHOD_1_28EE3E336BA49CFF_OFFSET UNITYSDK_OFFSET(0x1106EA50)
#define CLASS_2_5F54932385CBEA5E___C_METHOD_1_380494E39D44F6A7_OFFSET UNITYSDK_OFFSET(0x1106F370)
#define CLASS_2_5F54932385CBEA5E___C_METHOD_1_38120310B788D27A_OFFSET UNITYSDK_OFFSET(0x1106EC90)
#define CLASS_2_5F54932385CBEA5E___C_METHOD_1_6868B1620DDA02F1_OFFSET UNITYSDK_OFFSET(0x1106EC70)
#define CLASS_2_5F54932385CBEA5E___C_METHOD_1_933713A4305E9272_OFFSET UNITYSDK_OFFSET(0x1106F350)
#define CLASS_2_5F54932385CBEA5E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1106EA00)
#define CLASS_2_5F54932385CBEA5E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1106EA40)

inline static constexpr unsigned int Class_2_5F54932385CBEA5E___c_TypeDefinitionIndex = 58969;

class Class_2_5F54932385CBEA5E___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_2_208CC9941471731A_565*, ::System::Int32>** StaticGet___9__50_3()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_565*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F54932385CBEA5E___c_TypeDefinitionIndex)->GetStaticField(0x480C0);
	}
	static ::System::Func_2<::Class_2_208CC9941471731A_257*, ::Enum_3_5F938359207CCDBD>** StaticGet___9__0_0()
	{
		return (::System::Func_2<::Class_2_208CC9941471731A_257*, ::Enum_3_5F938359207CCDBD>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F54932385CBEA5E___c_TypeDefinitionIndex)->GetStaticField(0x480C8);
	}
	static ::Class_2_5F54932385CBEA5E___c** StaticGet___9()
	{
		return (::Class_2_5F54932385CBEA5E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5F54932385CBEA5E___c_TypeDefinitionIndex)->GetStaticField(0x480D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5F54932385CBEA5E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F54932385CBEA5E___C__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::System::Int32>* Method_1_28EE3E336BA49CFF()
	{
		return ((::System::Collections::Generic::IList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F54932385CBEA5E___C_METHOD_1_28EE3E336BA49CFF_OFFSET))(this);
	}

	::Enum_3_5F938359207CCDBD Method_1_6868B1620DDA02F1(::Class_2_208CC9941471731A_257* a1)
	{
		return ((::Enum_3_5F938359207CCDBD(*)(::PVOID, ::Class_2_208CC9941471731A_257*))((::PBYTE)hIl2Cpp + CLASS_2_5F54932385CBEA5E___C_METHOD_1_6868B1620DDA02F1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_38120310B788D27A(::Class_2_01B22E9930E7BB4D* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_01B22E9930E7BB4D*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5F54932385CBEA5E___C_METHOD_1_38120310B788D27A_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_933713A4305E9272(::Class_2_208CC9941471731A_565* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_565*))((::PBYTE)hIl2Cpp + CLASS_2_5F54932385CBEA5E___C_METHOD_1_933713A4305E9272_OFFSET))(this, a1);
	}

	::System::String* Method_1_380494E39D44F6A7(::System::Int32 a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_5F54932385CBEA5E___C_METHOD_1_380494E39D44F6A7_OFFSET))(this, a1);
	}
};
