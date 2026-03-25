#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3D07D3D32ECE229A_METHOD_1_2AAFA33947AA86B1_OFFSET UNITYSDK_OFFSET(0x105061A0)
#define CLASS_1_3D07D3D32ECE229A_METHOD_1_F1FD9D7B05F35A11_OFFSET UNITYSDK_OFFSET(0x10506290)
#define CLASS_1_3D07D3D32ECE229A__CTOR_OFFSET UNITYSDK_OFFSET(0x10506490)

inline static constexpr unsigned int Class_1_3D07D3D32ECE229A_TypeDefinitionIndex = 50832;

class Class_1_3D07D3D32ECE229A : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_573*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3D07D3D32ECE229A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2AAFA33947AA86B1(::Il2CppArray<::Class_0_16E4307DCC419505_573*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Class_0_16E4307DCC419505_573*>*))((::PBYTE)hIl2Cpp + CLASS_1_3D07D3D32ECE229A_METHOD_1_2AAFA33947AA86B1_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_F1FD9D7B05F35A11(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_3D07D3D32ECE229A_METHOD_1_F1FD9D7B05F35A11_OFFSET))(this, a1);
	}
};
