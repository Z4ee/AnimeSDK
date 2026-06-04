#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2670985A37556FEA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_993DBED7F998012B_METHOD_1_014B8F2BBB4CB85C_OFFSET UNITYSDK_OFFSET(0x139CFC20)
#define CLASS_1_993DBED7F998012B_METHOD_1_4CAE3B8C68B822CF_OFFSET UNITYSDK_OFFSET(0x139CFD80)
#define CLASS_1_993DBED7F998012B_METHOD_1_A32DDC747A180616_OFFSET UNITYSDK_OFFSET(0x139CF790)
#define CLASS_1_993DBED7F998012B_METHOD_1_BC4B412F7582CAFC_OFFSET UNITYSDK_OFFSET(0x139CFED0)
#define CLASS_1_993DBED7F998012B__CCTOR_OFFSET UNITYSDK_OFFSET(0x139D0480)
#define CLASS_1_993DBED7F998012B__CTOR_OFFSET UNITYSDK_OFFSET(0x139D0470)

inline static constexpr unsigned int Class_1_993DBED7F998012B_TypeDefinitionIndex = 61071;

class Class_1_993DBED7F998012B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_993DBED7F998012B_TypeDefinitionIndex)->GetStaticField(0x66B40);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_993DBED7F998012B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_993DBED7F998012B__CCTOR_OFFSET))();
	}

	::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>* Method_1_A32DDC747A180616(::System::String* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_2670985A37556FEA*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_993DBED7F998012B_METHOD_1_A32DDC747A180616_OFFSET))(this, a1);
	}

	static ::System::String* Method_1_014B8F2BBB4CB85C(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_993DBED7F998012B_METHOD_1_014B8F2BBB4CB85C_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_4CAE3B8C68B822CF(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_993DBED7F998012B_METHOD_1_4CAE3B8C68B822CF_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_BC4B412F7582CAFC(::System::String* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_993DBED7F998012B_METHOD_1_BC4B412F7582CAFC_OFFSET))(a1);
	}
};
