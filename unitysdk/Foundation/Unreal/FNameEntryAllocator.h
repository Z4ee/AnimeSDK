#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Foundation/Unreal/FNameEntryAllocator___blocks_e__FixedBuffer.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ALLOCATEBLOCK_OFFSET UNITYSDK_OFFSET(0x1E806DF0)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ALLOCATENAMEENTRY_OFFSET UNITYSDK_OFFSET(0xA7C890)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_CREATE_OFFSET UNITYSDK_OFFSET(0x1E807290)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_FREEBLOCK_OFFSET UNITYSDK_OFFSET(0x1E806EC0)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x490D20)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_NEWBLOCK_OFFSET UNITYSDK_OFFSET(0xA7C880)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_RESOLVE_OFFSET UNITYSDK_OFFSET(0xA7C8A0)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_TOALIGNEDLENGTH_OFFSET UNITYSDK_OFFSET(0x1E806E60)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E806D20)
#define FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0xA7C7C0)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int FNameEntryAllocator_TypeDefinitionIndex = 8689;

	struct alignas(8) FNameEntryAllocator
	{
		static ::System::Int32* StaticGet_DataOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryAllocator_TypeDefinitionIndex)->GetStaticField(0x3B50);
		}
		static ::System::Int32* StaticGet_BlockByteSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryAllocator_TypeDefinitionIndex)->GetStaticField(0x3B54);
		}
		static ::System::Int32* StaticGet_Stride()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(FNameEntryAllocator_TypeDefinitionIndex)->GetStaticField(0x3B58);
		}
		::System::UInt32 _currentBlock; // 0x10
		::System::Int32 _currentByteCursor; // 0x14
		::Foundation::Unreal::FNameEntryAllocator___blocks_e__FixedBuffer _blocks; // 0x18

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::Foundation::DefaultConstruct _)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::DefaultConstruct))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR__CTOR_OFFSET))(this, _);
		}

		::System::Boolean IsDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ISDISPOSED_OFFSET))(this);
		}

		static ::System::Void AllocateBlock(::System::Int64& pointer)
		{
			return ((::System::Void(*)(::System::Int64&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ALLOCATEBLOCK_OFFSET))(pointer);
		}

		static ::System::Int32 ToAlignedLength(::System::Int32 bytes)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_TOALIGNEDLENGTH_OFFSET))(bytes);
		}

		static ::System::Void FreeBlock(::System::Int64& pointer)
		{
			return ((::System::Void(*)(::System::Int64&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_FREEBLOCK_OFFSET))(pointer);
		}

		::System::Boolean NewBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_NEWBLOCK_OFFSET))(this);
		}

		/*
		::Foundation::Unreal::FNameEntry* AllocateNameEntry(::System::Int32 bytes, ::Foundation::Unreal::FNameEntryHandle& handle)
		{
			return ((::Foundation::Unreal::FNameEntry*(*)(::PVOID, ::System::Int32, ::Foundation::Unreal::FNameEntryHandle&))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_ALLOCATENAMEENTRY_OFFSET))(this, bytes, handle);
		}
		*/

		static ::Foundation::Unreal::FNameEntryAllocator Create()
		{
			return ((::Foundation::Unreal::FNameEntryAllocator(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_CREATE_OFFSET))();
		}

		/*
		::Foundation::Unreal::FNameEntry* Resolve(::Foundation::Unreal::FNameEntryHandle handle)
		{
			return ((::Foundation::Unreal::FNameEntry*(*)(::PVOID, ::Foundation::Unreal::FNameEntryHandle))((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_FNAMEENTRYALLOCATOR_RESOLVE_OFFSET))(this, handle);
		}
		*/
	};
}
