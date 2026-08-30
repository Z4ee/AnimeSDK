#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1326;
class Class_1_9245418C99B6B18D;
namespace RPG::GameCore { class RedDotNodeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F98149BCEA416F85_METHOD_1_782A264ADCCFDB63_OFFSET UNITYSDK_OFFSET(0xBD89C90)
#define CLASS_1_F98149BCEA416F85_METHOD_1_C14A23B3DEF26748_OFFSET UNITYSDK_OFFSET(0xBD8A420)
#define CLASS_1_F98149BCEA416F85_METHOD_1_D23E7A68A365DA99_OFFSET UNITYSDK_OFFSET(0xBD89480)
#define CLASS_1_F98149BCEA416F85__CTOR_OFFSET UNITYSDK_OFFSET(0xBD89430)

inline static constexpr unsigned int Class_1_F98149BCEA416F85_TypeDefinitionIndex = 78684;

class Class_1_F98149BCEA416F85 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1326* AHDMPIOFBLD; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_1326* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1326*))((::PBYTE)hIl2Cpp + CLASS_1_F98149BCEA416F85__CTOR_OFFSET))(this, a1);
	}

	::Class_1_9245418C99B6B18D* Method_1_D23E7A68A365DA99()
	{
		return ((::Class_1_9245418C99B6B18D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F98149BCEA416F85_METHOD_1_D23E7A68A365DA99_OFFSET))(this);
	}

	static ::System::Void Method_1_782A264ADCCFDB63(::Il2CppArray<::RPG::GameCore::RedDotNodeConfig*>* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* a2, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* a3)
	{
		return ((::System::Void(*)(::Il2CppArray<::RPG::GameCore::RedDotNodeConfig*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>*))((::PBYTE)hIl2Cpp + CLASS_1_F98149BCEA416F85_METHOD_1_782A264ADCCFDB63_OFFSET))(a1, a2, a3);
	}

	static ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* Method_1_C14A23B3DEF26748(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F98149BCEA416F85_METHOD_1_C14A23B3DEF26748_OFFSET))(a1, a2);
	}
};
