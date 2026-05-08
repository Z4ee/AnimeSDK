#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9F0AB26A968587C9_METHOD_1_131F9CE478A59ED4_OFFSET UNITYSDK_OFFSET(0xFC429B0)
#define CLASS_1_9F0AB26A968587C9_METHOD_1_8F60C6B3033EBC27_OFFSET UNITYSDK_OFFSET(0xFC42CB0)
#define CLASS_1_9F0AB26A968587C9_METHOD_1_9D09150229F552A6_OFFSET UNITYSDK_OFFSET(0xFC42DF0)
#define CLASS_1_9F0AB26A968587C9_METHOD_1_E002D778B594EFC6_OFFSET UNITYSDK_OFFSET(0xFC42870)

inline static constexpr unsigned int Class_1_9F0AB26A968587C9_TypeDefinitionIndex = 64994;

class Class_1_9F0AB26A968587C9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_E002D778B594EFC6(::Class_2_1824EF69C8E376A3* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + CLASS_1_9F0AB26A968587C9_METHOD_1_E002D778B594EFC6_OFFSET))(a1);
	}

	static ::System::Void Method_1_131F9CE478A59ED4(::System::Int32 a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Int32& a4, ::System::Int32& a5)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32&, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_9F0AB26A968587C9_METHOD_1_131F9CE478A59ED4_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Collections::Generic::List_1<::System::String*>* Method_1_8F60C6B3033EBC27(::MoleMole::InLevelAvatarDataItem* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::MoleMole::InLevelAvatarDataItem*))((::PBYTE)hIl2Cpp + CLASS_1_9F0AB26A968587C9_METHOD_1_8F60C6B3033EBC27_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_9D09150229F552A6(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_9F0AB26A968587C9_METHOD_1_9D09150229F552A6_OFFSET))(a1);
	}
};
