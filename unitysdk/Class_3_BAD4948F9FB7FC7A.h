#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

class Class_1_8289F2785D9AA990;
class Class_2_208CC9941471731A_904;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_BAD4948F9FB7FC7A_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19A81040)
#define CLASS_3_BAD4948F9FB7FC7A_METHOD_3_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x19A80B00)
#define CLASS_3_BAD4948F9FB7FC7A_METHOD_3_6B015C3E5E148E39_OFFSET UNITYSDK_OFFSET(0x19A812B0)
#define CLASS_3_BAD4948F9FB7FC7A_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x19A81440)
#define CLASS_3_BAD4948F9FB7FC7A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19A81220)
#define CLASS_3_BAD4948F9FB7FC7A_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x19A809F0)
#define CLASS_3_BAD4948F9FB7FC7A__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A81090)
#define CLASS_3_BAD4948F9FB7FC7A__CTOR_OFFSET UNITYSDK_OFFSET(0x19A81110)

inline static constexpr unsigned int Class_3_BAD4948F9FB7FC7A_TypeDefinitionIndex = 69999;

class Class_3_BAD4948F9FB7FC7A : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_2 = 0x3E; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_8289F2785D9AA990*>* Field_3_1; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_904*>*>* Field_3_0; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_BAD4948F9FB7FC7A__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAD4948F9FB7FC7A__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAD4948F9FB7FC7A_ONCLEAN_OFFSET))(this);
	}

	::System::Void Method_3_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAD4948F9FB7FC7A_METHOD_3_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAD4948F9FB7FC7A_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAD4948F9FB7FC7A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::Class_3_BAD4948F9FB7FC7A* Method_3_6B015C3E5E148E39()
	{
		return ((::Class_3_BAD4948F9FB7FC7A*(*)())((::PBYTE)hIl2Cpp + CLASS_3_BAD4948F9FB7FC7A_METHOD_3_6B015C3E5E148E39_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BAD4948F9FB7FC7A_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
