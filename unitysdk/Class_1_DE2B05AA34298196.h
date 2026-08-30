#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_DE2B05AA34298196__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4086A0)

inline static constexpr unsigned int Class_1_DE2B05AA34298196_TypeDefinitionIndex = 40835;

class Class_1_DE2B05AA34298196 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_MLFGMEBDJLD()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE2B05AA34298196_TypeDefinitionIndex)->GetStaticField(0x54610);
	}
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_FJFMMIIMAGL()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE2B05AA34298196_TypeDefinitionIndex)->GetStaticField(0x54618);
	}
	// static const ::System::Int32 DGIKNEHDGLJ = 0x0; // 0x0
	// static const ::System::Int32 CFDBPGHKKFM = 0x1; // 0x0
	// static const ::System::Int32 AHFMMPIIDGK = 0x2; // 0x0
	// static const ::System::Int32 LJLNLPMKIBN = 0x3; // 0x0
	// static const ::System::Int32 LCGCFFHGGNC = 0x4; // 0x0
	// static const ::System::Int32 EIEMBHPCMLE = 0x5; // 0x0
	// static const ::System::Int32 IKNLOOFFGNK = 0x6; // 0x0
	// static const ::System::Int32 DLNKHNACAFD = 0x7; // 0x0
	// static const ::System::Int32 EODELBIPJBG = 0x8; // 0x0
	// static const ::System::Int32 PBNPPJEMDKL = 0x9; // 0x0
	// static const ::System::Int32 CCKJLHMKDBO = 0xA; // 0x0
	// static const ::System::Int32 DHFEBPAFDIF = 0xB; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE2B05AA34298196__CCTOR_OFFSET))();
	}
};
