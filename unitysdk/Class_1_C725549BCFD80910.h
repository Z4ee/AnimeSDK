#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { template <typename T> class PhantomPlayerFrameData_1; }
namespace System { class String; }

#define CLASS_1_C725549BCFD80910_METHOD_1_59315BEBED7547A2_OFFSET UNITYSDK_OFFSET(0x1A04D4F0)
#define CLASS_1_C725549BCFD80910__CTOR_OFFSET UNITYSDK_OFFSET(0x1A04D6F0)

inline static constexpr unsigned int Class_1_C725549BCFD80910_TypeDefinitionIndex = 40983;

class Class_1_C725549BCFD80910 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_1; // 0x0
	// static const ::System::String* Field_1_2; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C725549BCFD80910__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_59315BEBED7547A2(::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameData_1<::System::Boolean>* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::RPG::Client::LittleGame::FiveDim::PhantomPlayerFrameData_1<::System::Boolean>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C725549BCFD80910_METHOD_1_59315BEBED7547A2_OFFSET))(a1, a2, a3, a4);
	}
};
