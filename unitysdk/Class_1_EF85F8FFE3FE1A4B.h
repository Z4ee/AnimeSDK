#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5EF6FA78DF0E25E3.h"
#include "unitysdk/Struct_2_774AE34007386904.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_1E8B33C8507CF317_OFFSET UNITYSDK_OFFSET(0x1359E7C0)
#define CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_2CE610DEBDA74759_OFFSET UNITYSDK_OFFSET(0x1359E520)
#define CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_81BDADE0FA03E483_OFFSET UNITYSDK_OFFSET(0x1359EF80)
#define CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_BDECDCA1D6F2C1C2_OFFSET UNITYSDK_OFFSET(0x1359F2B0)
#define CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_E115632C020D2A57_OFFSET UNITYSDK_OFFSET(0x1359EBA0)

inline static constexpr unsigned int Class_1_EF85F8FFE3FE1A4B_TypeDefinitionIndex = 66618;

class Class_1_EF85F8FFE3FE1A4B : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0

	static ::System::String* Method_1_2CE610DEBDA74759(::System::Int32 a1)
	{
		return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_2CE610DEBDA74759_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1E8B33C8507CF317(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_1E8B33C8507CF317_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E115632C020D2A57(::System::Int32 a1, ::Struct_2_5EF6FA78DF0E25E3& a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::Struct_2_5EF6FA78DF0E25E3&))((::PBYTE)hIl2Cpp + CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_E115632C020D2A57_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_81BDADE0FA03E483(::System::Int32 a1, ::Struct_2_774AE34007386904& a2)
	{
		return ((::System::Void(*)(::System::Int32, ::Struct_2_774AE34007386904&))((::PBYTE)hIl2Cpp + CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_81BDADE0FA03E483_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_BDECDCA1D6F2C1C2(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EF85F8FFE3FE1A4B_METHOD_1_BDECDCA1D6F2C1C2_OFFSET))(a1, a2);
	}
};
