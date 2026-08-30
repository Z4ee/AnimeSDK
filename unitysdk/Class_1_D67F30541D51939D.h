#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_1_D67F30541D51939D_Class_1_B5BA994BEBF00EBF;
class Class_2_A2D3B2717F83F87B;
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_D67F30541D51939D_METHOD_1_351F63B7DCA0EB56_OFFSET UNITYSDK_OFFSET(0x1D77B870)
#define CLASS_1_D67F30541D51939D_METHOD_1_71F3490B79F4A659_OFFSET UNITYSDK_OFFSET(0x1D77B0E0)
#define CLASS_1_D67F30541D51939D__CTOR_OFFSET UNITYSDK_OFFSET(0x1D77BC30)

inline static constexpr unsigned int Class_1_D67F30541D51939D_TypeDefinitionIndex = 6181;

class Class_1_D67F30541D51939D : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D67F30541D51939D__CTOR_OFFSET))(this);
	}

	static ::System::Boolean Method_1_71F3490B79F4A659(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1, ::System::Single a2, ::System::Int32& a3, ::Il2CppArray<::System::Int32>*& a4)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*, ::System::Single, ::System::Int32&, ::Il2CppArray<::System::Int32>*&))((::PBYTE)hIl2Cpp + CLASS_1_D67F30541D51939D_METHOD_1_71F3490B79F4A659_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_351F63B7DCA0EB56(::Class_1_D67F30541D51939D_Class_1_B5BA994BEBF00EBF*& a1, ::System::Int32 a2, ::Class_2_A2D3B2717F83F87B* a3)
	{
		return ((::System::Boolean(*)(::Class_1_D67F30541D51939D_Class_1_B5BA994BEBF00EBF*&, ::System::Int32, ::Class_2_A2D3B2717F83F87B*))((::PBYTE)hIl2Cpp + CLASS_1_D67F30541D51939D_METHOD_1_351F63B7DCA0EB56_OFFSET))(a1, a2, a3);
	}
};
