#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_0_16E4307DCC419505_449;
class Class_1_168DAECE7447D5DB;
class Class_2_208CC9941471731A_462;
class Class_2_208CC9941471731A_994;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9F3D5D601B086F88_METHOD_1_41755BD4857393C2_OFFSET UNITYSDK_OFFSET(0x148223E0)
#define CLASS_1_9F3D5D601B086F88_METHOD_1_5F2EF3795625C3B4_OFFSET UNITYSDK_OFFSET(0x14822350)
#define CLASS_1_9F3D5D601B086F88_METHOD_1_FE46CFDD5AFA32C9_OFFSET UNITYSDK_OFFSET(0x14822660)
#define CLASS_1_9F3D5D601B086F88__CTOR_OFFSET UNITYSDK_OFFSET(0x14822190)

inline static constexpr unsigned int Class_1_9F3D5D601B086F88_TypeDefinitionIndex = 76859;

class Class_1_9F3D5D601B086F88 : public ::System::Object
{
public:
	::Class_1_168DAECE7447D5DB* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_449*>* Field_1_6; // 0x18
	::Class_2_208CC9941471731A_994* Field_1_15; // 0x20
	::Foundation::AssetPath Field_1_8; // 0x28
	::Class_2_208CC9941471731A_462* Field_1_9; // 0x38
	::System::Int32 Field_1_0; // 0x40
	::System::Int32 Field_1_5; // 0x44
	::UnityEngine::Vector2 Field_1_11; // 0x48
	::System::Int32 Field_1_7; // 0x50
	::System::Boolean Field_1_10; // 0x54
	::System::Boolean Field_1_2; // 0x55
	::System::Int32 Field_1_4; // 0x58

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F3D5D601B086F88__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_1_5F2EF3795625C3B4()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F3D5D601B086F88_METHOD_1_5F2EF3795625C3B4_OFFSET))(this);
	}

	::System::Boolean Method_1_41755BD4857393C2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F3D5D601B086F88_METHOD_1_41755BD4857393C2_OFFSET))(this);
	}

	::System::Int32 Method_1_FE46CFDD5AFA32C9()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F3D5D601B086F88_METHOD_1_FE46CFDD5AFA32C9_OFFSET))(this);
	}
};
